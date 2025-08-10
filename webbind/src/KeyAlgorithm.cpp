#include "webbind/KeyAlgorithm.hpp"

using emlite::Val;
namespace webbind {

KeyAlgorithm::KeyAlgorithm(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
KeyAlgorithm KeyAlgorithm::take_ownership(Handle h) noexcept {
        return KeyAlgorithm(h);
    }
KeyAlgorithm::KeyAlgorithm(const emlite::Val &val) noexcept: emlite::Val(val) {}
KeyAlgorithm::KeyAlgorithm() noexcept: emlite::Val(emlite::Val::object()) {}
KeyAlgorithm KeyAlgorithm::clone() const noexcept { return *this; }

jsbind::String KeyAlgorithm::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void KeyAlgorithm::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}


} // namespace webbind