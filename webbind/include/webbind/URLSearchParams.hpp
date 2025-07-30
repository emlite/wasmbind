#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class URLSearchParams : public emlite::Val {
    explicit URLSearchParams(Handle h) noexcept;

public:
    explicit URLSearchParams(const emlite::Val &val) noexcept;
    static URLSearchParams take_ownership(Handle h) noexcept;

    URLSearchParams clone() const noexcept;
    URLSearchParams();
    URLSearchParams(const jsbind::Any& init);
    unsigned long size() const;
    jsbind::Undefined append(const jsbind::String& name, const jsbind::String& value);
    jsbind::Undefined delete_(const jsbind::String& name);
    jsbind::Undefined delete_(const jsbind::String& name, const jsbind::String& value);
    jsbind::String get(const jsbind::String& name);
    jsbind::TypedArray<jsbind::String> getAll(const jsbind::String& name);
    bool has(const jsbind::String& name);
    bool has(const jsbind::String& name, const jsbind::String& value);
    jsbind::Undefined set(const jsbind::String& name, const jsbind::String& value);
    jsbind::Undefined sort();
};

