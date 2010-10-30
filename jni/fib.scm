;; simple fib
(define (fib x)
	(letrec 
		((helper (lambda (n a b)
			(if (= n 0)
				a
				(helper (- n 1) b (+ a b))))))
		(helper x 0 1)))

;; c define		
(c-define (c-fib x) (int32) int "fib" "" (fib x))