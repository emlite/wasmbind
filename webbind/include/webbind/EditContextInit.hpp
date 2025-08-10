#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type EditContextInit
/// [`EditContextInit`](https://developer.mozilla.org/en-US/docs/Web/API/EditContextInit)
class EditContextInit : public emlite::Val {
  explicit EditContextInit(Handle h) noexcept;
public:
    static EditContextInit take_ownership(Handle h) noexcept;
    explicit EditContextInit(const emlite::Val &val) noexcept;
    EditContextInit() noexcept;
    [[nodiscard]] EditContextInit clone() const noexcept;
    [[nodiscard]] jsbind::String text() const;
    void text(const jsbind::String& value);
    [[nodiscard]] unsigned long selectionStart() const;
    void selectionStart(unsigned long value);
    [[nodiscard]] unsigned long selectionEnd() const;
    void selectionEnd(unsigned long value);
};

} // namespace webbind