#include <webbind/LockManagerSnapshot.hpp>
#include <webbind/LockInfo.hpp>

using emlite::Val;
namespace webbind {

LockManagerSnapshot::LockManagerSnapshot(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LockManagerSnapshot LockManagerSnapshot::take_ownership(Handle h) noexcept {
        return LockManagerSnapshot(h);
    }
LockManagerSnapshot::LockManagerSnapshot(const emlite::Val &val) noexcept: emlite::Val(val) {}
LockManagerSnapshot::LockManagerSnapshot() noexcept: emlite::Val(emlite::Val::object()) {}
LockManagerSnapshot LockManagerSnapshot::clone() const noexcept { return *this; }

jsbind::TypedArray<LockInfo> LockManagerSnapshot::held() const {
    return emlite::Val::get("held").as<jsbind::TypedArray<LockInfo>>();
}

void LockManagerSnapshot::held(const jsbind::TypedArray<LockInfo>& value) {
    emlite::Val::set("held", value);
}

jsbind::TypedArray<LockInfo> LockManagerSnapshot::pending() const {
    return emlite::Val::get("pending").as<jsbind::TypedArray<LockInfo>>();
}

void LockManagerSnapshot::pending(const jsbind::TypedArray<LockInfo>& value) {
    emlite::Val::set("pending", value);
}


} // namespace webbind