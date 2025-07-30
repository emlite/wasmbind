#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SharedStorageModifierMethod.hpp"
#include "enums.hpp"

class SharedStorageSetMethodOptions;


class SharedStorageSetMethod : public SharedStorageModifierMethod {
    explicit SharedStorageSetMethod(Handle h) noexcept;

public:
    explicit SharedStorageSetMethod(const emlite::Val &val) noexcept;
    static SharedStorageSetMethod take_ownership(Handle h) noexcept;

    SharedStorageSetMethod clone() const noexcept;
    SharedStorageSetMethod(const jsbind::String& key, const jsbind::String& value);
    SharedStorageSetMethod(const jsbind::String& key, const jsbind::String& value, const SharedStorageSetMethodOptions& options);
};

