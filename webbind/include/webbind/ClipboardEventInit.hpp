#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class DataTransfer;

/// Dictionary type ClipboardEventInit
class ClipboardEventInit : public EventInit {
  explicit ClipboardEventInit(Handle h) noexcept;
public:
    static ClipboardEventInit take_ownership(Handle h) noexcept;
    explicit ClipboardEventInit(const emlite::Val &val) noexcept;
    ClipboardEventInit() noexcept;
    [[nodiscard]] ClipboardEventInit clone() const noexcept;
    /// Getter of the `clipboardData` attribute.
    [[nodiscard]] DataTransfer clipboardData() const;
    /// Setter of the `clipboardData` attribute.
    void clipboardData(const DataTransfer& value);
};

} // namespace webbind