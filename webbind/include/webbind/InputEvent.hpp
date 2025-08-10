#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "UIEvent.hpp"
#include "InputEventInit.hpp"

namespace webbind {

class DataTransfer;
class StaticRange;

/// Interface InputEvent
/// [`InputEvent`](https://developer.mozilla.org/en-US/docs/Web/API/InputEvent)
class InputEvent : public UIEvent {
    explicit InputEvent(Handle h) noexcept;
public:
    explicit InputEvent(const emlite::Val &val) noexcept;
    static InputEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] InputEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new InputEvent(..)` constructor, creating a new InputEvent instance
    InputEvent(const jsbind::String& type);
    /// The `new InputEvent(..)` constructor, creating a new InputEvent instance
    InputEvent(const jsbind::String& type, const InputEventInit& eventInitDict);
    /// [`InputEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/InputEvent/data)
    /// [`InputEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/InputEvent/data)
    [[nodiscard]] jsbind::String data() const;
    /// [`InputEvent.isComposing`](https://developer.mozilla.org/en-US/docs/Web/API/InputEvent/isComposing)
    /// [`InputEvent.isComposing`](https://developer.mozilla.org/en-US/docs/Web/API/InputEvent/isComposing)
    [[nodiscard]] bool isComposing() const;
    /// [`InputEvent.inputType`](https://developer.mozilla.org/en-US/docs/Web/API/InputEvent/inputType)
    /// [`InputEvent.inputType`](https://developer.mozilla.org/en-US/docs/Web/API/InputEvent/inputType)
    [[nodiscard]] jsbind::String inputType() const;
    /// [`InputEvent.dataTransfer`](https://developer.mozilla.org/en-US/docs/Web/API/InputEvent/dataTransfer)
    /// [`InputEvent.dataTransfer`](https://developer.mozilla.org/en-US/docs/Web/API/InputEvent/dataTransfer)
    [[nodiscard]] DataTransfer dataTransfer() const;
    /// The getTargetRanges method.
    /// [`InputEvent.getTargetRanges`](https://developer.mozilla.org/en-US/docs/Web/API/InputEvent/getTargetRanges)
    jsbind::TypedArray<StaticRange> getTargetRanges();
};

} // namespace webbind