#parse("42 Header")
#if (${HEADER_FILENAME})
#[[#include]]# "${HEADER_FILENAME}"
#end
