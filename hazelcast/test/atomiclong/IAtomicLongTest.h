//
//  ClientAtomiclLong.h
//  hazelcast
//
//  Created by Batikan Turkmen on 02.08.2013.
//  Copyright (c) 2013 Batikan Turkmen. All rights reserved.
//

#ifndef hazelcast_ClientAtomicLong_h
#define hazelcast_ClientAtomicLong_h

#include "iTest.h"
#include "ClientConfig.h"
#include "IMap.h"
#include "HazelcastInstance.h"
#include "IAtomicLong.h"


namespace hazelcast {
    namespace client {

        class HazelcastClient;

        namespace test {

            class HazelcastInstanceFactory;

            class IAtomicLongTest : public iTest::iTestFixture<IAtomicLongTest> {

            public:

                IAtomicLongTest(HazelcastInstanceFactory&);

                void addTests();

                void beforeClass();

                void afterClass();

                void beforeTest();

                void afterTest();

                void test();

            private:
                HazelcastInstanceFactory& hazelcastInstanceFactory;
                HazelcastInstance instance;
                ClientConfig clientConfig;
                std::auto_ptr<HazelcastClient> client;
                std::auto_ptr<IAtomicLong > atom;
            };
        }
    }
}
#endif