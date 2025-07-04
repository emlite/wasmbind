#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "UIEvent.hpp"
#include "enums.hpp"


class CompositionEvent : public UIEvent {
    explicit CompositionEvent(Handle h) noexcept;

public:
    explicit CompositionEvent(const emlite::Val &val) noexcept;
    static CompositionEvent take_ownership(Handle h) noexcept;

    CompositionEvent clone() const noexcept;
    CompositionEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::USVString data() const;
    jsbind::Undefined initCompositionEvent(const jsbind::DOMString& typeArg, bool bubblesArg, bool cancelableArg, const jsbind::Any& viewArg, const jsbind::DOMString& dataArg);
};

