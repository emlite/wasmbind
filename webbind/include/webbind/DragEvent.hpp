#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MouseEvent.hpp"
#include "enums.hpp"

class DataTransfer;


/// The DragEvent class.
/// [`DragEvent`](https://developer.mozilla.org/en-US/docs/Web/API/DragEvent)
class DragEvent : public MouseEvent {
    explicit DragEvent(Handle h) noexcept;

public:
    explicit DragEvent(const emlite::Val &val) noexcept;
    static DragEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] DragEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DragEvent(..)` constructor, creating a new DragEvent instance
    DragEvent(const jsbind::String& type);
    /// The `new DragEvent(..)` constructor, creating a new DragEvent instance
    DragEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `dataTransfer` attribute.
    /// [`DragEvent.dataTransfer`](https://developer.mozilla.org/en-US/docs/Web/API/DragEvent/dataTransfer)
    [[nodiscard]] DataTransfer dataTransfer() const;
};

