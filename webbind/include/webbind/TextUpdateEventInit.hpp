#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type TextUpdateEventInit
class TextUpdateEventInit : public EventInit {
  explicit TextUpdateEventInit(Handle h) noexcept;
public:
    static TextUpdateEventInit take_ownership(Handle h) noexcept;
    explicit TextUpdateEventInit(const emlite::Val &val) noexcept;
    TextUpdateEventInit() noexcept;
    [[nodiscard]] TextUpdateEventInit clone() const noexcept;
    /// Getter of the `updateRangeStart` attribute.
    [[nodiscard]] unsigned long updateRangeStart() const;
    /// Setter of the `updateRangeStart` attribute.
    void updateRangeStart(unsigned long value);
    /// Getter of the `updateRangeEnd` attribute.
    [[nodiscard]] unsigned long updateRangeEnd() const;
    /// Setter of the `updateRangeEnd` attribute.
    void updateRangeEnd(unsigned long value);
    /// Getter of the `text` attribute.
    [[nodiscard]] jsbind::String text() const;
    /// Setter of the `text` attribute.
    void text(const jsbind::String& value);
    /// Getter of the `selectionStart` attribute.
    [[nodiscard]] unsigned long selectionStart() const;
    /// Setter of the `selectionStart` attribute.
    void selectionStart(unsigned long value);
    /// Getter of the `selectionEnd` attribute.
    [[nodiscard]] unsigned long selectionEnd() const;
    /// Setter of the `selectionEnd` attribute.
    void selectionEnd(unsigned long value);
    /// Getter of the `compositionStart` attribute.
    [[nodiscard]] unsigned long compositionStart() const;
    /// Setter of the `compositionStart` attribute.
    void compositionStart(unsigned long value);
    /// Getter of the `compositionEnd` attribute.
    [[nodiscard]] unsigned long compositionEnd() const;
    /// Setter of the `compositionEnd` attribute.
    void compositionEnd(unsigned long value);
};

} // namespace webbind