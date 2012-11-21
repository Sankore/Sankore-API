HEADERS      += $$PWD/UBGeometryUtils.h \
                $$PWD/UBPlatformUtils.h \
                $$PWD/UBFileSystemUtils.h \
                $$PWD/UBStringUtils.h \
                $$PWD/UBVersion.h \
                $$PWD/UBCryptoUtils.h \
                $$PWD/UBBase32.h

SOURCES      += $$PWD/UBGeometryUtils.cpp \
                $$PWD/UBPlatformUtils.cpp \
                $$PWD/UBFileSystemUtils.cpp \
                $$PWD/UBStringUtils.cpp \
                $$PWD/UBVersion.cpp \
                $$PWD/UBCryptoUtils.cpp \
                $$PWD/UBBase32.cpp


win32 {

    SOURCES  += $$PWD/UBPlatformUtils_win.cpp
}            


macx {                

    OBJECTIVE_SOURCES  += $$PWD/UBPlatformUtils_mac.mm
                
}       


linux-g++ {

    SOURCES  += $$PWD/UBPlatformUtils_linux.cpp
}         
linux-g++-32 {

    SOURCES  += $$PWD/UBPlatformUtils_linux.cpp
}
linux-g++-64 {

    SOURCES  += $$PWD/UBPlatformUtils_linux.cpp
}
