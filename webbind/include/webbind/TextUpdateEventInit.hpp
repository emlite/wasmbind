#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type TextUpdateEventInit
/// [`TextUpdateEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEventInit)
class TextUpdateEventInit : public EventInit {
  explicit TextUpdateEventInit(Handle h) noexcept;
public:
    static TextUpdateEventInit take_ownership(Handle h) noexcept;
    explicit TextUpdateEventInit(const emlite::Val &val) noexcept;
    TextUpdateEventInit() noexcept;
    [[nodiscard]] TextUpdateEventInit clone() const noexcept;
    [[nodiscard]] unsigned long updateRangeStart() const;
    void updateRangeStart(unsigned long value);
    [[nodiscard]] unsigned long updateRangeEnd() const;
    void updateRangeEnd(unsigned long value);
    [[nodiscard]] jsbind::String text() const;
    void text(const jsbind::String& value);
    [[nodiscard]] unsigned long selectionStart() const;
    void selectionStart(unsigned long value);
    [[nodiscard]] unsigned long selectionEnd() const;
    void selectionEnd(unsigned long value);
    [[nodiscard]] unsigned long compositionStart() const;
    void compositionStart(unsigned long value);
    [[nodiscard]] unsigned long compositionEnd() const;
    void compositionEnd(unsigned long value);
};

} // namespace webbind