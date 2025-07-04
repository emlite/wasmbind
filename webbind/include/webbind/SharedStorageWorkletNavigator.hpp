#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class LockManager;


class SharedStorageWorkletNavigator : public emlite::Val {
    explicit SharedStorageWorkletNavigator(Handle h) noexcept;

public:
    explicit SharedStorageWorkletNavigator(const emlite::Val &val) noexcept;
    static SharedStorageWorkletNavigator take_ownership(Handle h) noexcept;

    SharedStorageWorkletNavigator clone() const noexcept;
    LockManager locks() const;
};

