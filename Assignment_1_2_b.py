import numpy as np
import time

def matrix_multiply(A, B):
    return np.dot(A, B)

def main():
    sizes = [64, 128, 256, 512, 1024]
    for N in sizes:
        A = np.random.randint(0, 10, (N, N))
        B = np.random.randint(0, 10, (N, N))
        
        start_time = time.time()
        C = matrix_multiply(A, B)
        end_time = time.time()
        
        elapsed_time = end_time - start_time
        print(f"Matrix multiplication of size {N}x{N} took {elapsed_time:.4f} seconds.")

if __name__ == "__main__":
    main()
