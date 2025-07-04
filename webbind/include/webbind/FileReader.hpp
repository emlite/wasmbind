#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class Blob;
class DOMException;


class FileReader : public EventTarget {
    explicit FileReader(Handle h) noexcept;

public:
    explicit FileReader(const emlite::Val &val) noexcept;
    static FileReader take_ownership(Handle h) noexcept;

    FileReader clone() const noexcept;
    FileReader();
    jsbind::Undefined readAsArrayBuffer(const Blob& blob);
    jsbind::Undefined readAsBinaryString(const Blob& blob);
    jsbind::Undefined readAsText(const Blob& blob, const jsbind::DOMString& encoding);
    jsbind::Undefined readAsDataURL(const Blob& blob);
    jsbind::Undefined abort();
    unsigned short readyState() const;
    jsbind::Any result() const;
    DOMException error() const;
    jsbind::Any onloadstart() const;
    void onloadstart(const jsbind::Any& value);
    jsbind::Any onprogress() const;
    void onprogress(const jsbind::Any& value);
    jsbind::Any onload() const;
    void onload(const jsbind::Any& value);
    jsbind::Any onabort() const;
    void onabort(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    jsbind::Any onloadend() const;
    void onloadend(const jsbind::Any& value);
};

