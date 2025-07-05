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
    DOMException(const jsbind::DOMString& message);
    DOMException(const jsbind::DOMString& message, const jsbind::DOMString& name);
    jsbind::DOMString name() const;
    jsbind::DOMString message() const;
    unsigned short code() const;
};

