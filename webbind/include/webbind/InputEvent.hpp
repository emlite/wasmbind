#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "UIEvent.hpp"
#include "enums.hpp"

class DataTransfer;
class StaticRange;


class InputEvent : public UIEvent {
    explicit InputEvent(Handle h) noexcept;

public:
    explicit InputEvent(const emlite::Val &val) noexcept;
    static InputEvent take_ownership(Handle h) noexcept;

    InputEvent clone() const noexcept;
    InputEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::USVString data() const;
    bool isComposing() const;
    jsbind::DOMString inputType() const;
    DataTransfer dataTransfer() const;
    jsbind::Sequence<StaticRange> getTargetRanges();
};

