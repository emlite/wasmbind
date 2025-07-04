#include <webbind/SharedStorageWorkletNavigator.hpp>
#include <webbind/LockManager.hpp>


SharedStorageWorkletNavigator SharedStorageWorkletNavigator::take_ownership(Handle h) noexcept {
        return SharedStorageWorkletNavigator(h);
    }
SharedStorageWorkletNavigator SharedStorageWorkletNavigator::clone() const noexcept { return *this; }
SharedStorageWorkletNavigator::SharedStorageWorkletNavigator(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SharedStorageWorkletNavigator::SharedStorageWorkletNavigator(const emlite::Val &val) noexcept: emlite::Val(val) {}


LockManager SharedStorageWorkletNavigator::locks() const {
    return emlite::Val::get("locks").as<LockManager>();
}

