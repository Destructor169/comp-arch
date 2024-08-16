import numpy as np
import time
import random

def matrix_multiply(A, B):
    return np.dot(A, B)

def main():
    sizes = [64, 128, 256, 512, 1024]
    for N in sizes:
        A = np.array([[random.uniform(0, 10) for _ in range(N)] for _ in range(N)])
        B = np.array([[random.uniform(0, 10) for _ in range(N)] for _ in range(N)])
        
        start_time = time.time()
        C = matrix_multiply(A, B)
        end_time = time.time()
        
        elapsed_time = end_time - start_time
        print(f"Matrix multiplication of size {N}x{N} took {elapsed_time:.4f} seconds.")

if __name__ == "__main__":
    main()
