#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MouseEventInit.hpp"

namespace webbind {

class DataTransfer;

/// Dictionary type DragEventInit
class DragEventInit : public MouseEventInit {
  explicit DragEventInit(Handle h) noexcept;
public:
    static DragEventInit take_ownership(Handle h) noexcept;
    explicit DragEventInit(const emlite::Val &val) noexcept;
    DragEventInit() noexcept;
    [[nodiscard]] DragEventInit clone() const noexcept;
    /// Getter of the `dataTransfer` attribute.
    [[nodiscard]] DataTransfer dataTransfer() const;
    /// Setter of the `dataTransfer` attribute.
    void dataTransfer(const DataTransfer& value);
};

} // namespace webbind