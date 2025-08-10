#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class Blob;
class DOMException;

/// Interface FileReader
/// [`FileReader`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader)
class FileReader : public EventTarget {
    explicit FileReader(Handle h) noexcept;
public:
    explicit FileReader(const emlite::Val &val) noexcept;
    static FileReader take_ownership(Handle h) noexcept;
    [[nodiscard]] FileReader clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new FileReader(..)` constructor, creating a new FileReader instance
    FileReader();
    /// The readAsArrayBuffer method.
    /// [`FileReader.readAsArrayBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/readAsArrayBuffer)
    jsbind::Undefined readAsArrayBuffer(const Blob& blob);
    /// The readAsBinaryString method.
    /// [`FileReader.readAsBinaryString`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/readAsBinaryString)
    jsbind::Undefined readAsBinaryString(const Blob& blob);
    /// The readAsText method.
    /// [`FileReader.readAsText`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/readAsText)
    jsbind::Undefined readAsText(const Blob& blob);
    /// The readAsText method.
    /// [`FileReader.readAsText`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/readAsText)
    jsbind::Undefined readAsText(const Blob& blob, const jsbind::String& encoding);
    /// The readAsDataURL method.
    /// [`FileReader.readAsDataURL`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/readAsDataURL)
    jsbind::Undefined readAsDataURL(const Blob& blob);
    /// The abort method.
    /// [`FileReader.abort`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/abort)
    jsbind::Undefined abort();
    /// [`FileReader.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/readyState)
    /// [`FileReader.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/readyState)
    [[nodiscard]] unsigned short readyState() const;
    /// [`FileReader.result`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/result)
    /// [`FileReader.result`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/result)
    [[nodiscard]] jsbind::Any result() const;
    /// [`FileReader.error`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/error)
    /// [`FileReader.error`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/error)
    [[nodiscard]] DOMException error() const;
    /// [`FileReader.onloadstart`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onloadstart)
    /// [`FileReader.onloadstart`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onloadstart)
    [[nodiscard]] jsbind::Any onloadstart() const;
    /// Setter of the `onloadstart` attribute.
    /// [`FileReader.onloadstart`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onloadstart)
    void onloadstart(const jsbind::Any& value);
    /// [`FileReader.onprogress`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onprogress)
    /// [`FileReader.onprogress`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onprogress)
    [[nodiscard]] jsbind::Any onprogress() const;
    /// Setter of the `onprogress` attribute.
    /// [`FileReader.onprogress`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onprogress)
    void onprogress(const jsbind::Any& value);
    /// [`FileReader.onload`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onload)
    /// [`FileReader.onload`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onload)
    [[nodiscard]] jsbind::Any onload() const;
    /// Setter of the `onload` attribute.
    /// [`FileReader.onload`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onload)
    void onload(const jsbind::Any& value);
    /// [`FileReader.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onabort)
    /// [`FileReader.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onabort)
    [[nodiscard]] jsbind::Any onabort() const;
    /// Setter of the `onabort` attribute.
    /// [`FileReader.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onabort)
    void onabort(const jsbind::Any& value);
    /// [`FileReader.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onerror)
    /// [`FileReader.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`FileReader.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onerror)
    void onerror(const jsbind::Any& value);
    /// [`FileReader.onloadend`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onloadend)
    /// [`FileReader.onloadend`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onloadend)
    [[nodiscard]] jsbind::Any onloadend() const;
    /// Setter of the `onloadend` attribute.
    /// [`FileReader.onloadend`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onloadend)
    void onloadend(const jsbind::Any& value);
};

} // namespace webbind