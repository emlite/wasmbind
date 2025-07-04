#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class MediaQueryList : public EventTarget {
    explicit MediaQueryList(Handle h) noexcept;

public:
    explicit MediaQueryList(const emlite::Val &val) noexcept;
    static MediaQueryList take_ownership(Handle h) noexcept;

    MediaQueryList clone() const noexcept;
    jsbind::CSSOMString media() const;
    bool matches() const;
    jsbind::Undefined addListener(const jsbind::Function& callback);
    jsbind::Undefined removeListener(const jsbind::Function& callback);
    jsbind::Any onchange() const;
    void onchange(const jsbind::Any& value);
};

