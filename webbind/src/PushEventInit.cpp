#include <webbind/PushEventInit.hpp>

using emlite::Val;
namespace webbind {

PushEventInit::PushEventInit(Handle h) noexcept : ExtendableEventInit(emlite::Val::take_ownership(h)) {}
PushEventInit PushEventInit::take_ownership(Handle h) noexcept {
        return PushEventInit(h);
    }
PushEventInit::PushEventInit(const emlite::Val &val) noexcept: ExtendableEventInit(val) {}
PushEventInit::PushEventInit() noexcept: ExtendableEventInit(emlite::Val::object()) {}
PushEventInit PushEventInit::clone() const noexcept { return *this; }

jsbind::Any PushEventInit::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

void PushEventInit::data(const jsbind::Any& value) {
    emlite::Val::set("data", value);
}


} // namespace webbind