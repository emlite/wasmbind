#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class DataTransfer;

/// Dictionary type ClipboardEventInit
/// [`ClipboardEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/ClipboardEventInit)
class ClipboardEventInit : public EventInit {
  explicit ClipboardEventInit(Handle h) noexcept;
public:
    static ClipboardEventInit take_ownership(Handle h) noexcept;
    explicit ClipboardEventInit(const emlite::Val &val) noexcept;
    ClipboardEventInit() noexcept;
    [[nodiscard]] ClipboardEventInit clone() const noexcept;
    [[nodiscard]] DataTransfer clipboardData() const;
    void clipboardData(const DataTransfer& value);
};

} // namespace webbind