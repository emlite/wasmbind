#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class IDBKeyRange;


class IDBKeyRange : public emlite::Val {
    explicit IDBKeyRange(Handle h) noexcept;

public:
    explicit IDBKeyRange(const emlite::Val &val) noexcept;
    static IDBKeyRange take_ownership(Handle h) noexcept;

    IDBKeyRange clone() const noexcept;
    jsbind::Any lower() const;
    jsbind::Any upper() const;
    bool lowerOpen() const;
    bool upperOpen() const;
    static IDBKeyRange only(const jsbind::Any& value);
    static IDBKeyRange lowerBound(const jsbind::Any& lower, bool open);
    static IDBKeyRange upperBound(const jsbind::Any& upper, bool open);
    static IDBKeyRange bound(const jsbind::Any& lower, const jsbind::Any& upper, bool lowerOpen, bool upperOpen);
    bool includes(const jsbind::Any& key);
};

