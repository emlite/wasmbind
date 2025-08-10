#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type EditContextInit
class EditContextInit : public emlite::Val {
  explicit EditContextInit(Handle h) noexcept;
public:
    static EditContextInit take_ownership(Handle h) noexcept;
    explicit EditContextInit(const emlite::Val &val) noexcept;
    EditContextInit() noexcept;
    [[nodiscard]] EditContextInit clone() const noexcept;
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
};

} // namespace webbind