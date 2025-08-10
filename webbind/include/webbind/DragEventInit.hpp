#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MouseEventInit.hpp"

namespace webbind {

class DataTransfer;

/// Dictionary type DragEventInit
/// [`DragEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/DragEventInit)
class DragEventInit : public MouseEventInit {
  explicit DragEventInit(Handle h) noexcept;
public:
    static DragEventInit take_ownership(Handle h) noexcept;
    explicit DragEventInit(const emlite::Val &val) noexcept;
    DragEventInit() noexcept;
    [[nodiscard]] DragEventInit clone() const noexcept;
    [[nodiscard]] DataTransfer dataTransfer() const;
    void dataTransfer(const DataTransfer& value);
};

} // namespace webbind