#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SpeechGrammar;


/// The SpeechGrammarList class.
/// [`SpeechGrammarList`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechGrammarList)
class SpeechGrammarList : public emlite::Val {
    explicit SpeechGrammarList(Handle h) noexcept;

public:
    explicit SpeechGrammarList(const emlite::Val &val) noexcept;
    static SpeechGrammarList take_ownership(Handle h) noexcept;

    [[nodiscard]] SpeechGrammarList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SpeechGrammarList(..)` constructor, creating a new SpeechGrammarList instance
    SpeechGrammarList();
    /// Getter of the `length` attribute.
    /// [`SpeechGrammarList.length`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechGrammarList/length)
    [[nodiscard]] unsigned long length() const;
    /// The item method.
    /// [`SpeechGrammarList.item`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechGrammarList/item)
    SpeechGrammar item(unsigned long index);
    /// The addFromURI method.
    /// [`SpeechGrammarList.addFromURI`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechGrammarList/addFromURI)
    jsbind::Undefined addFromURI(const jsbind::String& src);
    /// The addFromURI method.
    /// [`SpeechGrammarList.addFromURI`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechGrammarList/addFromURI)
    jsbind::Undefined addFromURI(const jsbind::String& src, float weight);
    /// The addFromString method.
    /// [`SpeechGrammarList.addFromString`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechGrammarList/addFromString)
    jsbind::Undefined addFromString(const jsbind::String& string);
    /// The addFromString method.
    /// [`SpeechGrammarList.addFromString`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechGrammarList/addFromString)
    jsbind::Undefined addFromString(const jsbind::String& string, float weight);
};

