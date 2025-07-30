#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SharedStorageModifierMethod.hpp"
#include "enums.hpp"

class SharedStorageModifierMethodOptions;


class SharedStorageDeleteMethod : public SharedStorageModifierMethod {
    explicit SharedStorageDeleteMethod(Handle h) noexcept;

public:
    explicit SharedStorageDeleteMethod(const emlite::Val &val) noexcept;
    static SharedStorageDeleteMethod take_ownership(Handle h) noexcept;

    SharedStorageDeleteMethod clone() const noexcept;
    SharedStorageDeleteMethod(const jsbind::String& key);
    SharedStorageDeleteMethod(const jsbind::String& key, const SharedStorageModifierMethodOptions& options);
};

