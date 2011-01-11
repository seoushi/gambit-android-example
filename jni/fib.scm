;; simple fib
(define (fib x)
	(letrec 
		((helper (lambda (n a b)
			(if (= n 0)
				a
				(helper (- n 1) b (+ a b))))))
		(helper x 0 1)))

;; for testing ports
(define (test-ports)
	(read-line (open-process "ls") "failed"))

		
;; c defines
(c-define (c-fib x) (int32) int "fib" "" (fib x))

(c-define (c-testports) () char-string "testports" "" (test-ports))
