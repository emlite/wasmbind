#include <emlite/emlite.hpp>

int32_t parse_int(const char *src) {
    return emlite::Val::global("parseInt")(emlite::Val(src))
        .template as<int32_t>();
}

int32_t parse_int(const char *src, int32_t radix) {
    return emlite::Val::global("parseInt")(
               emlite::Val(src), emlite::Val(radix)
    )
        .template as<int32_t>();
}

double parse_float(const char *src) {
    return emlite::Val::global("parseFloat")(emlite::Val(src
                                             ))
        .template as<double>();
}