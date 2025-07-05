#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class History : public emlite::Val {
    explicit History(Handle h) noexcept;

public:
    explicit History(const emlite::Val &val) noexcept;
    static History take_ownership(Handle h) noexcept;

    History clone() const noexcept;
    unsigned long length() const;
    ScrollRestoration scrollRestoration() const;
    void scrollRestoration(const ScrollRestoration& value);
    jsbind::Any state() const;
    jsbind::Undefined go();
    jsbind::Undefined go(long delta);
    jsbind::Undefined back();
    jsbind::Undefined forward();
    jsbind::Undefined pushState(const jsbind::Any& data, const jsbind::DOMString& unused);
    jsbind::Undefined pushState(const jsbind::Any& data, const jsbind::DOMString& unused, const jsbind::USVString& url);
    jsbind::Undefined replaceState(const jsbind::Any& data, const jsbind::DOMString& unused);
    jsbind::Undefined replaceState(const jsbind::Any& data, const jsbind::DOMString& unused, const jsbind::USVString& url);
};

