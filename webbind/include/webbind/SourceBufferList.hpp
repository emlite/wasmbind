#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class SourceBuffer;


/// The SourceBufferList class.
/// [`SourceBufferList`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBufferList)
class SourceBufferList : public EventTarget {
    explicit SourceBufferList(Handle h) noexcept;

public:
    explicit SourceBufferList(const emlite::Val &val) noexcept;
    static SourceBufferList take_ownership(Handle h) noexcept;

    [[nodiscard]] SourceBufferList clone() const noexcept;
    /// Getter of the `length` attribute.
    /// [`SourceBufferList.length`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBufferList/length)
    [[nodiscard]] unsigned long length() const;
    /// Getter of the `onaddsourcebuffer` attribute.
    /// [`SourceBufferList.onaddsourcebuffer`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBufferList/onaddsourcebuffer)
    [[nodiscard]] jsbind::Any onaddsourcebuffer() const;
    /// Setter of the `onaddsourcebuffer` attribute.
    /// [`SourceBufferList.onaddsourcebuffer`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBufferList/onaddsourcebuffer)
    void onaddsourcebuffer(const jsbind::Any& value);
    /// Getter of the `onremovesourcebuffer` attribute.
    /// [`SourceBufferList.onremovesourcebuffer`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBufferList/onremovesourcebuffer)
    [[nodiscard]] jsbind::Any onremovesourcebuffer() const;
    /// Setter of the `onremovesourcebuffer` attribute.
    /// [`SourceBufferList.onremovesourcebuffer`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBufferList/onremovesourcebuffer)
    void onremovesourcebuffer(const jsbind::Any& value);
};

