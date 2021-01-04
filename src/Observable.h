//
// Created by Александр Мангазеев on 02.01.2021.
//

#ifndef LABA_1_2_OBSERVABLE_H
#define LABA_1_2_OBSERVABLE_H


#include <set>
#include <vector>

template< class Observer >
class Observable {
public:
    virtual ~Observable() {}

    Observable() : m_count(0) {}

    void registerObserver( Observer* observer ) {
        if( m_count != 0 ) {
            m_requests.push_back( ObserverRequest { &Observable< Observer >::registerObserver, observer } );
        } else if( observer ) {
            m_observers.insert( observer );
        }
    }

    void unregisterObserver( Observer* observer ) {
        if( m_count != 0 ) {
            m_requests.push_back( ObserverRequest { &Observable< Observer >::unregisterObserver, observer } );
        } else if( observer ) {
            m_observers.erase( observer );
        }
    }

protected:
    template< typename F, typename... Args >
    void notifyObservers( F f, Args... args ){

        ++m_count;

        for( Observer* ptr : m_observers )
        {
            ( ptr->*f )( args... );
        };

        --m_count;

        if( m_count == 0 ) {
            for( const ObserverRequest& r : m_requests ) {
                ( this->*r.operation )( r.observer );

            };
            m_requests.clear();

        }
    }

private:
    struct ObserverRequest {
        void ( Observable< Observer >::*operation )( Observer* );
        Observer* observer;
    };

    std::set< Observer* > m_observers;
    std::vector< ObserverRequest > m_requests;

    int m_count;
};


#endif //LABA_1_2_OBSERVABLE_H
