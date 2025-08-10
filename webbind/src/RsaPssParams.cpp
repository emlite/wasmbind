#include "webbind/RsaPssParams.hpp"

using emlite::Val;
namespace webbind {

RsaPssParams::RsaPssParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
RsaPssParams RsaPssParams::take_ownership(Handle h) noexcept {
        return RsaPssParams(h);
    }
RsaPssParams::RsaPssParams(const emlite::Val &val) noexcept: Algorithm(val) {}
RsaPssParams::RsaPssParams() noexcept: Algorithm(emlite::Val::object()) {}
RsaPssParams RsaPssParams::clone() const noexcept { return *this; }

unsigned long RsaPssParams::saltLength() const {
    return emlite::Val::get("saltLength").as<unsigned long>();
}

void RsaPssParams::saltLength(unsigned long value) {
    emlite::Val::set("saltLength", value);
}


} // namespace webbind