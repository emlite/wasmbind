#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class LockManager;


/// The SharedStorageWorkletNavigator class.
/// [`SharedStorageWorkletNavigator`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletNavigator)
class SharedStorageWorkletNavigator : public emlite::Val {
    explicit SharedStorageWorkletNavigator(Handle h) noexcept;

public:
    explicit SharedStorageWorkletNavigator(const emlite::Val &val) noexcept;
    static SharedStorageWorkletNavigator take_ownership(Handle h) noexcept;

    [[nodiscard]] SharedStorageWorkletNavigator clone() const noexcept;
    /// Getter of the `locks` attribute.
    /// [`SharedStorageWorkletNavigator.locks`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletNavigator/locks)
    [[nodiscard]] LockManager locks() const;
};

