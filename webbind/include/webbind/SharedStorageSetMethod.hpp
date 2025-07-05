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
    SharedStorageSetMethod(const jsbind::DOMString& key, const jsbind::DOMString& value);
    SharedStorageSetMethod(const jsbind::DOMString& key, const jsbind::DOMString& value, const SharedStorageSetMethodOptions& options);
};

