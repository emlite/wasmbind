#include <webbind/EcKeyAlgorithm.hpp>

using emlite::Val;
namespace webbind {

EcKeyAlgorithm::EcKeyAlgorithm(Handle h) noexcept : KeyAlgorithm(emlite::Val::take_ownership(h)) {}
EcKeyAlgorithm EcKeyAlgorithm::take_ownership(Handle h) noexcept {
        return EcKeyAlgorithm(h);
    }
EcKeyAlgorithm::EcKeyAlgorithm(const emlite::Val &val) noexcept: KeyAlgorithm(val) {}
EcKeyAlgorithm::EcKeyAlgorithm() noexcept: KeyAlgorithm(emlite::Val::object()) {}
EcKeyAlgorithm EcKeyAlgorithm::clone() const noexcept { return *this; }

jsbind::Any EcKeyAlgorithm::namedCurve() const {
    return emlite::Val::get("namedCurve").as<jsbind::Any>();
}

void EcKeyAlgorithm::namedCurve(const jsbind::Any& value) {
    emlite::Val::set("namedCurve", value);
}


} // namespace webbind