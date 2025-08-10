#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WriteParams
class WriteParams : public emlite::Val {
  explicit WriteParams(Handle h) noexcept;
public:
    static WriteParams take_ownership(Handle h) noexcept;
    explicit WriteParams(const emlite::Val &val) noexcept;
    WriteParams() noexcept;
    [[nodiscard]] WriteParams clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] WriteCommandType type() const;
    /// Setter of the `type` attribute.
    void type(const WriteCommandType& value);
    /// Getter of the `size` attribute.
    [[nodiscard]] long long size() const;
    /// Setter of the `size` attribute.
    void size(long long value);
    /// Getter of the `position` attribute.
    [[nodiscard]] long long position() const;
    /// Setter of the `position` attribute.
    void position(long long value);
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Any data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Any& value);
};

} // namespace webbind