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
    CompositionEvent(const jsbind::String& type);
    CompositionEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::String data() const;
    jsbind::Undefined initCompositionEvent(const jsbind::String& typeArg);
    jsbind::Undefined initCompositionEvent(const jsbind::String& typeArg, bool bubblesArg);
    jsbind::Undefined initCompositionEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg);
    jsbind::Undefined initCompositionEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const jsbind::Any& viewArg);
    jsbind::Undefined initCompositionEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const jsbind::Any& viewArg, const jsbind::String& dataArg);
};

