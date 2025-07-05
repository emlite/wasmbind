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
    jsbind::Undefined append(const jsbind::ByteString& name, const jsbind::ByteString& value);
    jsbind::Undefined delete_(const jsbind::ByteString& name);
    jsbind::ByteString get(const jsbind::ByteString& name);
    jsbind::Sequence<jsbind::ByteString> getSetCookie();
    bool has(const jsbind::ByteString& name);
    jsbind::Undefined set(const jsbind::ByteString& name, const jsbind::ByteString& value);
};

