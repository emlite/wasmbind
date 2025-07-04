#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "IDBRequest.hpp"
#include "enums.hpp"


class IDBOpenDBRequest : public IDBRequest {
    explicit IDBOpenDBRequest(Handle h) noexcept;

public:
    explicit IDBOpenDBRequest(const emlite::Val &val) noexcept;
    static IDBOpenDBRequest take_ownership(Handle h) noexcept;

    IDBOpenDBRequest clone() const noexcept;
    jsbind::Any onblocked() const;
    void onblocked(const jsbind::Any& value);
    jsbind::Any onupgradeneeded() const;
    void onupgradeneeded(const jsbind::Any& value);
};

