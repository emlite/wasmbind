#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type Transformer
class Transformer : public emlite::Val {
  explicit Transformer(Handle h) noexcept;
public:
    static Transformer take_ownership(Handle h) noexcept;
    explicit Transformer(const emlite::Val &val) noexcept;
    Transformer() noexcept;
    [[nodiscard]] Transformer clone() const noexcept;
    /// Getter of the `start` attribute.
    [[nodiscard]] jsbind::Function start() const;
    /// Setter of the `start` attribute.
    void start(const jsbind::Function& value);
    /// Getter of the `transform` attribute.
    [[nodiscard]] jsbind::Function transform() const;
    /// Setter of the `transform` attribute.
    void transform(const jsbind::Function& value);
    /// Getter of the `flush` attribute.
    [[nodiscard]] jsbind::Function flush() const;
    /// Setter of the `flush` attribute.
    void flush(const jsbind::Function& value);
    /// Getter of the `cancel` attribute.
    [[nodiscard]] jsbind::Function cancel() const;
    /// Setter of the `cancel` attribute.
    void cancel(const jsbind::Function& value);
    /// Getter of the `readableType` attribute.
    [[nodiscard]] jsbind::Any readableType() const;
    /// Setter of the `readableType` attribute.
    void readableType(const jsbind::Any& value);
    /// Getter of the `writableType` attribute.
    [[nodiscard]] jsbind::Any writableType() const;
    /// Setter of the `writableType` attribute.
    void writableType(const jsbind::Any& value);
};

} // namespace webbind