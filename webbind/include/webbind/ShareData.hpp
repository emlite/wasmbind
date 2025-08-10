#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class File;

/// Dictionary type ShareData
class ShareData : public emlite::Val {
  explicit ShareData(Handle h) noexcept;
public:
    static ShareData take_ownership(Handle h) noexcept;
    explicit ShareData(const emlite::Val &val) noexcept;
    ShareData() noexcept;
    [[nodiscard]] ShareData clone() const noexcept;
    /// Getter of the `files` attribute.
    [[nodiscard]] jsbind::TypedArray<File> files() const;
    /// Setter of the `files` attribute.
    void files(const jsbind::TypedArray<File>& value);
    /// Getter of the `title` attribute.
    [[nodiscard]] jsbind::String title() const;
    /// Setter of the `title` attribute.
    void title(const jsbind::String& value);
    /// Getter of the `text` attribute.
    [[nodiscard]] jsbind::String text() const;
    /// Setter of the `text` attribute.
    void text(const jsbind::String& value);
    /// Getter of the `url` attribute.
    [[nodiscard]] jsbind::String url() const;
    /// Setter of the `url` attribute.
    void url(const jsbind::String& value);
};

} // namespace webbind