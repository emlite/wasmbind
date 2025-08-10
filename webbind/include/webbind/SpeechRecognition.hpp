#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "SpeechRecognitionOptions.hpp"
#include "enums.hpp"

namespace webbind {

class SpeechGrammarList;
class SpeechRecognitionPhraseList;
class MediaStreamTrack;

/// Interface SpeechRecognition
/// [`SpeechRecognition`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition)
class SpeechRecognition : public EventTarget {
    explicit SpeechRecognition(Handle h) noexcept;
public:
    explicit SpeechRecognition(const emlite::Val &val) noexcept;
    static SpeechRecognition take_ownership(Handle h) noexcept;
    [[nodiscard]] SpeechRecognition clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SpeechRecognition(..)` constructor, creating a new SpeechRecognition instance
    SpeechRecognition();
    /// Getter of the `grammars` attribute.
    /// [`SpeechRecognition.grammars`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/grammars)
    [[nodiscard]] SpeechGrammarList grammars() const;
    /// Setter of the `grammars` attribute.
    /// [`SpeechRecognition.grammars`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/grammars)
    void grammars(const SpeechGrammarList& value);
    /// Getter of the `lang` attribute.
    /// [`SpeechRecognition.lang`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/lang)
    [[nodiscard]] jsbind::String lang() const;
    /// Setter of the `lang` attribute.
    /// [`SpeechRecognition.lang`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/lang)
    void lang(const jsbind::String& value);
    /// Getter of the `continuous` attribute.
    /// [`SpeechRecognition.continuous`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/continuous)
    [[nodiscard]] bool continuous() const;
    /// Setter of the `continuous` attribute.
    /// [`SpeechRecognition.continuous`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/continuous)
    void continuous(bool value);
    /// Getter of the `interimResults` attribute.
    /// [`SpeechRecognition.interimResults`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/interimResults)
    [[nodiscard]] bool interimResults() const;
    /// Setter of the `interimResults` attribute.
    /// [`SpeechRecognition.interimResults`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/interimResults)
    void interimResults(bool value);
    /// Getter of the `maxAlternatives` attribute.
    /// [`SpeechRecognition.maxAlternatives`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/maxAlternatives)
    [[nodiscard]] unsigned long maxAlternatives() const;
    /// Setter of the `maxAlternatives` attribute.
    /// [`SpeechRecognition.maxAlternatives`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/maxAlternatives)
    void maxAlternatives(unsigned long value);
    /// Getter of the `processLocally` attribute.
    /// [`SpeechRecognition.processLocally`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/processLocally)
    [[nodiscard]] bool processLocally() const;
    /// Setter of the `processLocally` attribute.
    /// [`SpeechRecognition.processLocally`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/processLocally)
    void processLocally(bool value);
    /// Getter of the `phrases` attribute.
    /// [`SpeechRecognition.phrases`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/phrases)
    [[nodiscard]] SpeechRecognitionPhraseList phrases() const;
    /// Setter of the `phrases` attribute.
    /// [`SpeechRecognition.phrases`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/phrases)
    void phrases(const SpeechRecognitionPhraseList& value);
    /// The start method.
    /// [`SpeechRecognition.start`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/start)
    jsbind::Undefined start(const MediaStreamTrack& audioTrack);
    /// The stop method.
    /// [`SpeechRecognition.stop`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/stop)
    jsbind::Undefined stop();
    /// The abort method.
    /// [`SpeechRecognition.abort`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/abort)
    jsbind::Undefined abort();
    /// The available method.
    /// [`SpeechRecognition.available`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/available)
    static jsbind::Promise<AvailabilityStatus> available(const SpeechRecognitionOptions& options);
    /// The install method.
    /// [`SpeechRecognition.install`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/install)
    static jsbind::Promise<bool> install(const SpeechRecognitionOptions& options);
    /// Getter of the `onaudiostart` attribute.
    /// [`SpeechRecognition.onaudiostart`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onaudiostart)
    [[nodiscard]] jsbind::Any onaudiostart() const;
    /// Setter of the `onaudiostart` attribute.
    /// [`SpeechRecognition.onaudiostart`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onaudiostart)
    void onaudiostart(const jsbind::Any& value);
    /// Getter of the `onsoundstart` attribute.
    /// [`SpeechRecognition.onsoundstart`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onsoundstart)
    [[nodiscard]] jsbind::Any onsoundstart() const;
    /// Setter of the `onsoundstart` attribute.
    /// [`SpeechRecognition.onsoundstart`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onsoundstart)
    void onsoundstart(const jsbind::Any& value);
    /// Getter of the `onspeechstart` attribute.
    /// [`SpeechRecognition.onspeechstart`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onspeechstart)
    [[nodiscard]] jsbind::Any onspeechstart() const;
    /// Setter of the `onspeechstart` attribute.
    /// [`SpeechRecognition.onspeechstart`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onspeechstart)
    void onspeechstart(const jsbind::Any& value);
    /// Getter of the `onspeechend` attribute.
    /// [`SpeechRecognition.onspeechend`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onspeechend)
    [[nodiscard]] jsbind::Any onspeechend() const;
    /// Setter of the `onspeechend` attribute.
    /// [`SpeechRecognition.onspeechend`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onspeechend)
    void onspeechend(const jsbind::Any& value);
    /// Getter of the `onsoundend` attribute.
    /// [`SpeechRecognition.onsoundend`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onsoundend)
    [[nodiscard]] jsbind::Any onsoundend() const;
    /// Setter of the `onsoundend` attribute.
    /// [`SpeechRecognition.onsoundend`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onsoundend)
    void onsoundend(const jsbind::Any& value);
    /// Getter of the `onaudioend` attribute.
    /// [`SpeechRecognition.onaudioend`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onaudioend)
    [[nodiscard]] jsbind::Any onaudioend() const;
    /// Setter of the `onaudioend` attribute.
    /// [`SpeechRecognition.onaudioend`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onaudioend)
    void onaudioend(const jsbind::Any& value);
    /// Getter of the `onresult` attribute.
    /// [`SpeechRecognition.onresult`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onresult)
    [[nodiscard]] jsbind::Any onresult() const;
    /// Setter of the `onresult` attribute.
    /// [`SpeechRecognition.onresult`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onresult)
    void onresult(const jsbind::Any& value);
    /// Getter of the `onnomatch` attribute.
    /// [`SpeechRecognition.onnomatch`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onnomatch)
    [[nodiscard]] jsbind::Any onnomatch() const;
    /// Setter of the `onnomatch` attribute.
    /// [`SpeechRecognition.onnomatch`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onnomatch)
    void onnomatch(const jsbind::Any& value);
    /// Getter of the `onerror` attribute.
    /// [`SpeechRecognition.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`SpeechRecognition.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onerror)
    void onerror(const jsbind::Any& value);
    /// Getter of the `onstart` attribute.
    /// [`SpeechRecognition.onstart`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onstart)
    [[nodiscard]] jsbind::Any onstart() const;
    /// Setter of the `onstart` attribute.
    /// [`SpeechRecognition.onstart`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onstart)
    void onstart(const jsbind::Any& value);
    /// Getter of the `onend` attribute.
    /// [`SpeechRecognition.onend`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onend)
    [[nodiscard]] jsbind::Any onend() const;
    /// Setter of the `onend` attribute.
    /// [`SpeechRecognition.onend`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition/onend)
    void onend(const jsbind::Any& value);
};

} // namespace webbind