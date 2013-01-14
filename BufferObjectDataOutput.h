//
//  BufferObjectDataOutput.h
//  Server
//
//  Created by sancar koyunlu on 1/10/13.
//  Copyright (c) 2013 sancar koyunlu. All rights reserved.
//

#ifndef __Server__BufferObjectDataOutput__
#define __Server__BufferObjectDataOutput__

#include <iostream>
#include "DataOutput.h"
#include "Closeable.h"
typedef unsigned char byte;

class BufferObjectDataOutput : public DataOutput , Closeable{
public:
    virtual void write(int index, int b) = 0;
    
    virtual void write(int index, byte b[], int off, int len) = 0;
    
    virtual void writeInt(int index, int v) throw (std::ios_base::failure) = 0;
    
    virtual void writeLong(int index, const long v) throw (std::ios_base::failure) = 0;
    
    virtual void writeBoolean(int index, const bool v) throw (std::ios_base::failure) = 0;
    
    virtual void writeByte(int index, const int v) throw (std::ios_base::failure) = 0;
    
    virtual void writeChar(int index, const int v) throw (std::ios_base::failure) = 0;
    
    virtual void writeDouble(int index, const double v) throw (std::ios_base::failure) = 0;
    
    virtual void writeFloat(int index, const float v) throw (std::ios_base::failure) = 0;
    
    virtual void writeShort(int index, const int v) throw (std::ios_base::failure) = 0;
    
    virtual int position() = 0;
    
    virtual void position(int newPos) = 0;
    
    virtual byte* getBuffer() = 0;
    
    virtual void reset() = 0;
    
//    virtual BufferObjectDataOutput duplicate() = 0; TODO
    
//    virtual BufferObjectDataOutput slice() = 0; TODO
};
#endif /* defined(__Server__BufferObjectDataOutput__) */