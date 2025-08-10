#include <webbind/Algorithm.hpp>

using emlite::Val;
namespace webbind {

Algorithm::Algorithm(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Algorithm Algorithm::take_ownership(Handle h) noexcept {
        return Algorithm(h);
    }
Algorithm::Algorithm(const emlite::Val &val) noexcept: emlite::Val(val) {}
Algorithm::Algorithm() noexcept: emlite::Val(emlite::Val::object()) {}
Algorithm Algorithm::clone() const noexcept { return *this; }

jsbind::String Algorithm::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void Algorithm::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}


} // namespace webbind