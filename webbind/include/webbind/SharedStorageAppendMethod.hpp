#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SharedStorageModifierMethod.hpp"
#include "enums.hpp"

class SharedStorageModifierMethodOptions;


class SharedStorageAppendMethod : public SharedStorageModifierMethod {
    explicit SharedStorageAppendMethod(Handle h) noexcept;

public:
    explicit SharedStorageAppendMethod(const emlite::Val &val) noexcept;
    static SharedStorageAppendMethod take_ownership(Handle h) noexcept;

    SharedStorageAppendMethod clone() const noexcept;
    SharedStorageAppendMethod(const jsbind::String& key, const jsbind::String& value);
    SharedStorageAppendMethod(const jsbind::String& key, const jsbind::String& value, const SharedStorageModifierMethodOptions& options);
};

