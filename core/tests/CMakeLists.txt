add_gtest(
    NAME milan-core-Binning
    SOURCES testBinning.cc
    LIBRARIES milan-core
    #DEPS
)

add_gtest(
    NAME milan-core-Histogram 
    SOURCES testHistogram.cc
    LIBRARIES milan-core
    #DEPS
)

