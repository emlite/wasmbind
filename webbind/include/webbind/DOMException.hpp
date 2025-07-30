#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class DOMException : public emlite::Val {
    explicit DOMException(Handle h) noexcept;

public:
    explicit DOMException(const emlite::Val &val) noexcept;
    static DOMException take_ownership(Handle h) noexcept;

    DOMException clone() const noexcept;
    DOMException();
    DOMException(const jsbind::String& message);
    DOMException(const jsbind::String& message, const jsbind::String& name);
    jsbind::String name() const;
    jsbind::String message() const;
    unsigned short code() const;
};

