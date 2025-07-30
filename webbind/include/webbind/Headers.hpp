#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class Headers : public emlite::Val {
    explicit Headers(Handle h) noexcept;

public:
    explicit Headers(const emlite::Val &val) noexcept;
    static Headers take_ownership(Handle h) noexcept;

    Headers clone() const noexcept;
    Headers();
    Headers(const jsbind::Any& init);
    jsbind::Undefined append(const jsbind::String& name, const jsbind::String& value);
    jsbind::Undefined delete_(const jsbind::String& name);
    jsbind::String get(const jsbind::String& name);
    jsbind::TypedArray<jsbind::String> getSetCookie();
    bool has(const jsbind::String& name);
    jsbind::Undefined set(const jsbind::String& name, const jsbind::String& value);
};

